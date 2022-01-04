echo "Enter first Number"
read first

echo "Enter second Number"

read sec


echo "Enter third Number"
read third


if [ $first -gt $sec ];then
if [ $first -gt $third ];then
echo -e  "$first is greatest"
else
echo -e "$third is greatest"


if [ $sec -gt $third ];then
echo -e "$sec is greatest number"
else
echo -e "$third is greatest number"


fi
