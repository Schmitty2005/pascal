{$MODE DELPHI}
Unit fretboard;


//
// https://www.liutaiomottola.com/formulae/fret.htm#12th2calcAll
//
//  d = s – (s / (2 ^ (n / 12)))
//
//  d = distance from nut
//  s = scale length
//  n = fret number

Interface

Uses sysutils, math;

Function mmToInch ( mms : single) : single;

Function inchTomm ( inch : single ) : single;

function singleFret ( fretNumber : single = 1 ; scaleLength : single = 25.5) : single ;




Implementation

function singleFret ( fretNumber : single = 1 ; scaleLength : single = 25.5) : single ;
  begin  
    result := scaleLength - (scaleLength / ( power(2,(fretNumber / 12))));
  end;

function markerDot (fretMarker : single = 3 ; scaleLength : single = 25.5) : single;
  begin
    result := (singleFret(fretmarker, scaleLength) + singleFret (fretmarker+1, scaleLength)) / 2;
  end;
Function mmToInch ( mms : single) : single;
Var 
  inchDec : single;

Begin
  result := mms /25.4;
End;


Function inchTomm ( inch : single ) : single;
Var 
  mms : single;
Begin
  result :=  inch * 25.4;
End;

Begin
  
End.
