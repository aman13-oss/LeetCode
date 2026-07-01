-- Write your PostgreSQL query statement below
SELECT firstName,lastName,city,state
 from Person left join Address 
 on Person.personId=address.personId;
 