skips :: [a] -> [[a]]
skips input = [getElement num input | num<-[1..length(input)]]
getElement :: Int -> [z] -> [z]
getElement num lst = [x | (x, y)<-(filter (\(value,index)->(index `mod` num ==0)) (zip lst [1..]))]

localMaxima :: [Integer] -> [Integer]
localMaxima x = 
 if length(x)<3
  then []
   else [z | (z, q)<-(filter (\(value, index)->((index>0 && index<(length(x)-1)) && (value>x!!(index-1) && value>x!!(index+1)))) (zip x [0..]))]

histogram :: [Integer] -> String
histogram [] = "\n==========\n0123456789\n"
histogram x= builder (maximum (sumList x)) (sumList x)


sumList :: [Integer] -> [Int]
sumList x = [length (filter (0==) x),length (filter (1==) x),length (filter (2==) x),length (filter (3==) x),length (filter (4==) x),length (filter (5==) x),length (filter (6==) x),length (filter (7==) x),length (filter (8==) x),length (filter (9==) x)]

rowMaker :: [Int] -> Int -> [Char]
rowMaker x y = [if n>=y then '*' else ' '| n <- x]


builder :: Int->[Int]->[Char]
builder 0 _ = "==========\n0123456789\n"
builder x y= (rowMaker y x) ++ "\n" ++ (builder (x-1) y)  