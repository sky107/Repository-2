SELECT MAX(age) FROM dbms WHERE age NOT IN(SELECT MAX(age) FROM dbms) -> second max in age in table
SELCT DISTINCT age,email FROM dbms order by age desc LIMIT 0,N; ->most efficient
