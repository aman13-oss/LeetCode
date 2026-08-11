-- Write your PostgreSQL query statement below
select Users.name,sum(Transactions.amount) as balance
from Users
join Transactions
on 
Users.account=Transactions.account
group by Users.account,Users.name
HAVING SUM(Transactions.amount) > 10000;