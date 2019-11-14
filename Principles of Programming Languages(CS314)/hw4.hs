import System.Random
import System.IO


hangman :: String->String->IO()
hangman under actualWord = do
 putStrLn under
 guess <- getLine
 let currentWord= [if a == '_' && (actualWord!!b)==(head guess) then (head guess) else if (a/= '_') then a else '_' | (a,b)<-(zip under [0..])]
 if (currentWord==actualWord)
  then putStrLn currentWord
  else hangman currentWord actualWord

main :: IO()
main = do
 getWords <- readFile "words.txt"
 let listWords = words getWords
 x <- randomRIO (0,45407) :: IO Int
 let word = listWords!!x
 let underscores = ['_'|n<-word]
 hangman underscores word
