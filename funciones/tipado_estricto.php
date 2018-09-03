<?php
declare(strict_types = 1);


function suma(int $a, int $b){
  return $a + $b;
}



try {
    echo suma(2, 2.1);
} catch (typeError $e) {
  echo "Error".$e->getMessage();
                        
}



 ?>
