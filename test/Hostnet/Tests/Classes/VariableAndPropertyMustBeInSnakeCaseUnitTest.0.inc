<?php

class MyClass
{
    private $good_property;
    private $badProperty;
    private $goodproperty;
    private $badproperty_;
    private $_badproperty;

    public function setter(
        $good_variable,
        $badVariable,
        $goodvariable,
        $badvariable_,
        $_badvariable
    ) {
        $this->good_property  = $good_variable;
        $this->badProperty    = $badVariable;
        $this->goodproperty   = $goodvariable;
        $this->badproperty_   = $badvariable_;
        $this->_badproperty   = $_badvariable;
    }
}