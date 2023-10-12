# Write your MySQL query statement below
select lastName,firstName,city,state
from person
left join Address
on person.personId=Address.personId;