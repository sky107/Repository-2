echo "Enter year"
read y

ok=$(($y % 4))

if [ $ok -eq 0 ]
then
	echo "$y is a Leap Year"
else
	echo "$y is not a Leap Year"

fi
