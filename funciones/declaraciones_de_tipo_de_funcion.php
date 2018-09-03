<?php

declare(strict_types = 1);


// function suma(float $num1, float $num2):float{
//     return $num1 + $num2;
// }
//
// echo "<br />La suma es: ".suma(1,2.1);
// echo "<br /><br />";
// var_dump(suma(1,2));


// Utilizando objetos

class Gato{

}
class Perro{

}

function regresaGato():Gato{
  return new Gato;
}

var_dump(regresaGato());


 ?>
