SELECT NAME,EMAIL FROM dbms
SELECT DISTINCT NAME, EMAIL FROM dbms
SELECT COUNT(DISTINCT EMAIL) FROM dbms
SELECT * FROM dbms WHERE EMAIL='SKY@GMAIL.COM'
SELECT * FROM dbms WHERE EMAIL<>'SKY@GMAIL.COM'
SELECT * FROM dbms WHERE MARKS BETWEEN 65 AND 85
SELECT * FROM dbms WHERE EMAIL LIKE '%S' -> ends at s
SELECT * FROM dbms WHERE EMAIL LIKE 'S%' -> starts at s
SELECT * FROM dbms WHERE EMAIL LIKE '%com%'->have com
SELECT * FROM dbms WHERE EMAIL LIKE 's%m' -> starts with s and ends with m
SELECT * FROM dbms WHERE age IN (36,3)
SELECT * FROM dbms WHERE EMAIL BETWEEN 'RAKESH@GMAIL.COM' AND 'SKY@GMAIL.COM' ORDER BY AGE DESC
SelECT * FROM dbms WHERE date_of_creation BETWEEN '2021-07-19 22:29:39' AND '2021-07-19 22:29:57'
INSERT INTO dbms (Name,Email,Marks,age,date_of_creation) VALUES ('Siddharth Gupta','sg@gmail.com',11, 34,CURRENT_TIMESTAMP);
SELCT * FROM dbms WHERE id%2=0 -> if id is there then for alernate row selection
SELECT SUM(age) FROM dbms; -> sum of all the elements in row
SELECT TOP 3 * FROM dbms WHERE len(email)>2
SELECT * FROM dbms LIMIT 1 OFFSET 3; -> skip 3 records fetch 1 record after that
SELECT * FROM dbms LIMIT 0,4; -> shorcut of above 
SELECT NAME,email, round(age/100,2) AS 'RATIO' FROM dbms; -> rounding and displaying using AS





