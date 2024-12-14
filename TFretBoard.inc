{

type
  TMyClass = class
  private
    FSomeVar: integer;
  public
    constructor Create; overload;
    constructor Create(Args: array of integer); overload;
    destructor Destroy; override;
    function GetSomeVar: integer;
    procedure SetSomeVar(newvalue: integer);
  published
    property SomeVar: integer read GetSomeVar write SetSomeVar default 0;
  end;

}


// uses math

type 
  TFretBoard = class

  private 
    isMetric : Boolean ; 
    isImperial : Boolean ;
    mScaleLength : single ;  //need scale length in mm for default 25.5 inch = 647.7 mm
    mNumFrets : single ;
    mFretboard : array of single;
    function singleFret(fret : single): single;
    procedure CalculateArray;
    function TextOutput: wideString;
  
  public
    constructor Create ; overload;
    destructor Destroy; override;
    procedure SetFrets (frets : single = 24);
    //procedure CalulateArray () ; 
  
  published
    property ScaleLength : single read mScaleLength write mScaleLength default 647.7;
    property NumFrets : single read mNumFrets write  SetFrets default 24; 
    property Metric  : Boolean  read isMetric write isMetric default true;
    Property Imperial  : Boolean read isImperial  write isImperial default false; 
  end;

function TFretBoard.singleFret(fret : single): single;
begin
  if isMetric then
    result := mScaleLength- (mscaleLength / ( power(2,(fret / 12))))
    else result := (mScaleLength- (mscaleLength / ( power(2,(fret / 12))))) / 25.4 ;
end;


procedure TFretBoard.CalculateArray;
var 
 x : Integer;
begin
  x := 1;
  SetLength(mFretboard, Integer(mNumFrets));
  while x <= mNumFrets do
    begin 
    writeln(x); 
      mFretboard[x] := singlefret(x);
      inc (x);
    end;
end; 


constructor TFretBoard.Create;
begin
  mNumFrets := 24;
  mScaleLength := 647.7; //unit is in mm from 25.5 inches
  isMetric := True;
  isImperial := False;
  CalculateArray;
  //@TODO Calulate array for all frets
end;

destructor TFretBoard.Destroy;
begin
  
end;


function TFretBoard.TextOutput: wideString;
begin
  result := 'Not Yet implemented!'
end;



procedure TFretBoard.SetFrets(frets: single);
begin
  mNumFrets := frets;
end;



