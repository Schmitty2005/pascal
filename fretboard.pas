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

Function singleFret ( fretNumber : single = 1 ; scaleLength : single = 25.5) : single ;

Function markerDot (fretMarker : single = 3 ; scaleLength : single = 25.5) : single;


Implementation

Function singleFret ( fretNumber : single = 1 ; scaleLength : single = 25.5) : single ;
Begin
  result := scaleLength - (scaleLength / ( power(2,(fretNumber / 12))));
End;

Function markerDot (fretMarker : single = 3 ; scaleLength : single = 25.5) : single;
Begin
  result := (singleFret(fretmarker, scaleLength) + singleFret (fretmarker+1, scaleLength)) / 2;
End;

Function mmToInch ( mms : single) : single;
Begin
  result := mms /25.4;
End;


Function inchTomm ( inch : single ) : single;
Begin
  result :=  inch * 25.4;
End;

Begin

End.
