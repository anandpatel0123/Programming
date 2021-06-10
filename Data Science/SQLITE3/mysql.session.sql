select * from Student;

create table Class(class_name varchar(100), num_stu int not Null default 50, room_num int);
describe Class;

drop table Class;

insert into class values("me-1",50,106);
describe class;
select * from class;
alter table class add(incharge_id varchar(100));
alter table class modify incharge_id int;

alter table class change incharge_id inc_id int;
alter table class drop inc_id,drop incharge;

desc class;
select * from class;

select class_name, num_stu from class;

use sql_store;
-- How to use IN statement
select * from Customers where state = 'VA' or state = 'GA' or state = 'FL';
select * from customers where state IN ('VA', 'FL', 'GA');
select * from customers where state not IN ('VA', 'FL', 'GA');
-- Return products with
-- 	 quantity in the stock equal to 49, 38, 72

select * from products where quantity_in_stock IN (49,38,72);

-- The Between Operator
select * from customers where points >= 1000 and points <= 3000;
select * from customers where points between 1000 and 3000;

-- Return customers born 
--				between 1/1/1990 and 1/1/2000
select * from customers where birth_date between '1990/1/1' and '2000/1/1';

-- Like Clause
-- 		it filter the content
select * from customers where last_name like 'b%';
select * from customers where last_name like '%field%';

-- REGEXP (Regular Expression)
select * from customers where last_name regexp 'field';
-- ^ for beginning of pattern
-- $ ending of pattern
-- | or operator
select * from customers where last_name regexp '^field';
select * from customers where last_name regexp 'field$';
select * from customers where last_name regexp 'field|mac|rose';
select * from customers where last_name regexp 'field$|mac|rose';
-- [] for multiple patter [gim]e before e any char g or i or m
select * from customers where last_name regexp '[gim]e';
-- [a-h]e all chars range from a to h
select * from customers where last_name regexp '[a-h]e';

-- Get the customers whose
-- 		first names are ELKA or AMBUR
-- 		last names end with EY or ON
-- 		last names start with MY or contains SE
-- 		last names contains B followed by R or U
select * from customers where first_name regexp 'ELKA|AMBUR';
select * from customers where last_name regexp 'EY$|ON$';
select * from customers where last_name regexp '^MY|SE';
select * from customers where last_name regexp 'b[ru]';

-- to check the null entries
select * from customers where phone is null;
select * from customers where phone is not null;
-- Get the orders that are not shipped
select * from orders where shipped_date is null;

-- order by sort data
select * from customers order by first_name;
select * from customers order by first_name desc;

select * from customers order by state, first_name;
select * from customers order by state desc, first_name;

-- this is legal in mysql but in other database it gives an error
select first_name, last_name from customers order by birth_date;

select first_name, last_name, 10 as points 
from customers order by state, points;
select first_name, last_name, 10 as points
from customers order by 1, 2; -- 1 = first_name 2 = last_name

-- sort all the items by quantity*unit_price from order_items in descending order
desc order_items;
select * from order_items where order_id = 2 order by quantity*unit_price desc;

-- limit the content to display
select * from customers limit 10;
select * from customers limit 6, 3; -- 6 is offset or starting and 3 is limit
-- page 1: 1 - 3
-- page 2: 4 - 6
-- page 3: 7 - 9

-- get top 3 loyal customers
-- customers who has more points
select * from customers order by points desc limit 3;

-- Aggregate functions
-- COUNT, AVG, MAX, MIN, SUM
-- count* gives the num of rows in a table
-- count(column_name) gives the count of all the non null values
-- count(distinct_name) gives the count of all the distinct values
use my_store;
select count(*) from orders;
select count(comments) from orders;
select count(*) from orders where comments is not null;
select count(*) from orders where comments is null;
select count(distinct status) from orders;

-- avg func
select avg(amount) from payments;
select avg(amount) from payments where amount > 20000;
select min(amount) from payments;
select max(amount) from payments;


-- update and delete
use student;
show tables;
desc class;
alter table class add(salary int);
alter table class drop salary;
update class set salary = 60000 ;
update class set salary = 10000 where roomNo = 101;
select * from class;
delete from class; -- it will delete all the rows of that class
delete from class where salary = 10000;
truncate class; -- it will delete all rows of that table
drop table class; -- it will delete the table completly 
drop database student; -- it will drop the database


-- Group by
-- Used to group rows that have the same values.
-- It summarizes data from the database.
-- The GROUP BY clause returns one row for each group. 

use classicmodels;
select customerName, country from customers;
select customerName, country from customers group by country; -- only one entry for one country

select count(*) from customers;
select count(*) from customers where country = 'USA';
select count(*) from customers group by country;
select country, count(*) from customers group by country;
select state, count(*) from customers group by state;

select count(*) from customers where state is not null;
select count(*) from customers where state is null;

select country, count(*) from customers where state is not null group by country;

-- sum of creditLimit of customers by the country
select country, sum(creditLimit) from customers ;
select country, sum(creditLimit) from customers group by country;
 -- GROUP BY TWO COLUMN
 SELECT COUNTRY, STATe, count(*) from customers group by country, state;

-- Having
-- WHERE keyword can not be used with group functions.
-- We have to use HAVING clause in SELECT statement to specify filter 
-- conditions for grouped results.
-- If the GROUP BY clause is omitted, the HAVING clause behaves like the 
-- WHERE clause.

select state, count(*) from customers group by state;
select state, count(*) from customers where state is not null group by state;
-- we cannot use group by in where clause
select state, count(*) from customers where count(*) > 5 group by  state;
-- it will give an error we cannot add where on count(*)
select state, count(*) from customers group by state having count(*) > 5;

select country, sum(creditLimit) from customers group by country;
select country, sum(creditLimit) from customers group by country 
having sum(creditLimit) > 100000;

select country, sum(creditLimit) from customers group by country 
having sum(creditLimit) > 100000 order by sum(creditLimit);

-- Joins 
create database School;
use school;
create table ClassDetails(Class_ID int, ClassTeacher_ID int);
create table TeacherDetails(Teacher_ID int, Name varchar(50), Subject varchar(50));
create table SubjectDetails(ID varchar(50), Name varchar(50), TotalStudents int);
show tables;
insert into ClassDetails values(1,10004),(2,10005),(3,10001),(4,10007),(5,10009);
insert into TeacherDetails values(10001, 'Komal', 'E403'), (10002,'Deepak','M702')
,(10005,'Mahesh','S809'),(10009,'Ravi','M702');

insert into SubjectDetails values('E403','English',34),('H009','Hindi',12),('M702','Maths',45),('X067','Sanskrit',24);
select * from TeacherDetails;



create table t1(ID int, Name varchar(10));
create table t2(ID varchar(10), Name varchar(10));
 select * from t2;
 insert into t1 values(1,'A'),(2,'B'),(3,'C');
 insert into t2 values('A' ,'abc'),('D','xyz'),('A','def'),('C','pqr');


-- Inner Join
select * from t1 inner join t2 on t1.name = t2.id;
select * from t1 inner join t2 on t1.name = t2.id where t1.id >= 2;

use school;
select class_id, name from classDetails join TeacherDetails on classTeacher_id = teacher_id;

select class_id, teacherdetails.name, subjectdetails.name from 
classdetails inner join teacherdetails on classdetails.classteacher_id
 = teacherdetails.teacher_id join subjectdetails on 
 teacherdetails.subject = subjectdetails.id;


-- left outer join
select * from t1;
select * from t1;
select * from t1 left join t2 on t1.name = t2.id;

-- right outer join
select * from t1 right join t2 on t1.name = t2.id;

-- SQLite
-- Indexing
use school;
desc classdetails;
show indexes from classdetails;
create table t3(id int, Name varchar(100));

select * from classdetails;
insert into classdetails values(20,10110);

insert into t3 values(10,'A'),(3,'W'),(45,'r'),(1,'T');
select * from t3;
insert into t3 values(12,'B');

-- Default Indexing
-- Clustered Indexing -> Primary Key
-- Non-Clustered Indexing -> Unique Key

use classicmodels;
desc customers;

show indexes from customers;

-- i need to find the customer num 480 info
select * from customers where customerNumber = 480;

-- how many rows this query has traversed
explain select * from customers where customerNumber = 480;
-- in result we can see that rows = 1, so it means we traversed only 1 row,
-- bcoz we searched in indexed column primary Key CustomerName

select * from customers where customerName = 'Royale Belge';
explain select * from customers where customerName = 'Royale Belge';
-- here in result we can that rows = 122, it means we have scanned 122 rows

-- now lets search on indexed column MUL(Multiple) it means can have duplictes
select * from customers where salesrepemployeenumber = 1504;
explain select * from customers where salesrepemployeenumber = 1504;

-- now lets add index or remove index
show indexes from customers;
-- syntax -> create index indexName on tablename(col_name);
create index index_postalcode on customers(postalcode);
desc customers;

select * from customers where postalcode = "44000";
explain select * from customers where postalcode = "44000";
-- we got rows = 2
-- now how to add index while creating the table
create table test(id int primary key, name varchar(100), address varchar(100), index name_index (name));
desc test;
show indexes from customers;
-- how to remove index
drop index index_postalcode on customers;


















































































































