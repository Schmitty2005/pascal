{$MODE DELPHI}
program fretest;

uses sysutils, math, fretboard;

{$INCLUDE TFretBoard}

var 
  frets : TFretBoard;
begin
  frets := TFretBoard.Create();

  writeln ( 'Fret 1 : ' + FloatToStrF(singlefret(), ffFixed, 2, 2));
  writeln ('MM to Inches : ' + FloatToStrF(mmToInch(1), ffFixed, 2,2));
  writeln ( 'Inches to MM  : ' + FloatToStrF(inchTomm(1), ffFixed,  2, 2));

  writeln ('Frets:  ' + FloatToStr(frets.numfrets));
  writeln (' Single Fret SPacing for 1st Fret  in mm: ' + FloatToStr(frets.singleFret(1)));
  writeln ( '       in Inches = ' + FloatToStr(mmToInch(frets.singleFret(1))));
  frets.metric := false;
  writeln ( ' Internal Conversion in Inches = ' + FloatToStr(frets.singleFret(1)));

end.