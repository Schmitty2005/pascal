{$MODE DELPHI}
program fretest;

uses sysutils, fretboard;

begin
  writeln ( 'Fret 1 : ' + FloatToStrF(singlefret(), ffFixed, 2, 2));
  
end.