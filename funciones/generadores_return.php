<?php


$gen = (function(){
    yield 1;
    yield 2;
    return 3;
})();

foreach ($gen as $value) {
    echo $value."<br />";
}
echo $gen -> getReturn();

 ?>
