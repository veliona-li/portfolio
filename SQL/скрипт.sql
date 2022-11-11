create database a;
use a;

create table aaa (
id integer auto_increment primary key,  
organization varchar(50), 
name varchar(50), 
surname varchar(50),
email varchar(50),
post varchar(50),
workphone integer,
homephone integer,
mobilephone varchar(50),
faxnum integer,
address varchar(50), 
town varchar(50),
republic varchar(50),
indeks integer,
country varchar(50)
);

insert into aaa (organization, name, surname, email, post, workphone, homephone, mobilephone, faxnum, address, town, republic, indeks, country)
values  ('Растр', 'Иванов', 'Сергей', 'ivanov@mail.ru', 'инженер', 516987, 265414, '898294586232', 264589, 'Гоголя, 18', 'Лениногорск', 'Татарстан', 423250, 'Россия'),
		('Иволга', 'Сидоров', 'Дмитрий', 'sid@rambler.ru', 'электрик', 264578, 514589, '890656423783', 264589, 'Куйбышева, 10', 'Лениногорск', 'Татарстан', 423250, 'Россия'),
		('Голден', 'Петров', 'Иван', 'petr@rambler.ru', 'ррррррр', 516987, 214589, '870554268972', 564278, 'Ленина, 12', 'Лениногорск', 'Татарстан', 423250, 'Россия'),
		('Лайма', 'Никитина', 'Элина', 'nikita@mail.ru', 'бухгалтер', 265578, 214563, '891745678891', 265578, 'Шашина, 30', 'Лениногорск', 'Татарстан', 423250, 'Россия'),
		('Рубин', 'Сергеева', 'Мария', 'serg@mail.ru', 'директор', 568374, 245689, '893745698750', 264582, 'Кирова, 58', 'Лениногорск', 'Татарстан', 423250, 'Россия');

select * from aaa;