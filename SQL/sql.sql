CREATE DATABASE a13;
USE a13;

CREATE TABLE aaa (
type_of_defect VARCHAR(50),
number_of_defects INT, 
accumulated_amount INT, 
percentage_of_defects INT,
accumulated_interest INT
);

INSERT INTO aaa (type_of_defect, number_of_defects, accumulated_amount, percentage_of_defects, accumulated_interest)
VALUES
('Деформация', 104, 104, 52, 52 ),
('Царапины  ', 42 , 144, 21, 73 ),
('Раковины  ', 20 , 166, 10, 83 ),
('Трещины   ', 10 , 176, 5 , 88 ),
('Пятна     ', 6  , 182, 3 , 91 ),
('Разрыв    ', 4  , 186, 2 , 93 ),
('Прочее    ', 14 , 200, 7,  100);
/*('Итого     ', 0  , 0  , 0 , 0  );*/

/*если(сумма(186+14==200), вывод суммы, иначе ничего)
если (накопленная сумма дефектов == 200), вывод -, иначе ничего)
если(сумма(93+7 == 100), вывод суммы, иначе ничего)
если(накопленный процент == 100), вывод -, иначе ничего)*/

SELECT type_of_defect, number_of_defects, accumulated_amount, percentage_of_defects, accumulated_interest FROM aaa
UNION ALL
SELECT "Итого", SUM(number_of_defects), "-", SUM(percentage_of_defects), "-" FROM aaa;