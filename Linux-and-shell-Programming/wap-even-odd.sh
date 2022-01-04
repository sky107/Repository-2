echo "Enter a number"

read n

rem=$(( $n%2))

# remeber to use space after bracket [

if [ $rem -eq 0 ]
then
echo "Numeber is even"
else
echo "Numebr is odd"

fi 
# To end the file
