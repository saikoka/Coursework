--import System.Random
import System.IO

main :: IO()
main = do
	getWords <- readFile "words.txt"
	let xd = words getWords
	print (xd!!1)
