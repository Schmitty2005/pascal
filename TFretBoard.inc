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
    function TextOutput :  wideString;
    function singleFret (fret : single): single;
   
  public 
  
    constructor Create ; overload;
    destructor Destroy; override;
    
  published
    property ScaleLength : single read mScaleLength write mScaleLength default 647.7;
    property NumFrets : single read mNumFrets write mNumFrets default 24; 
    property Metric  : Boolean  read isMetric write isMetric default true;
    Property Imperial  : Boolean read isImperial  write isImperial default false; 
    end;


constructor TFretBoard.Create;
begin
  mNumFrets := 24;
  mScaleLength := 647.7; //unit is in mm from 25.5 inches
  isMetric := True;
  isImperial := False;
end;

destructor TFretBoard.Destroy;
begin
  
end;


function TFretBoard.TextOutput: wideString;
begin
  result := 'Not Yet implemented!'
end;

function TFretBoard.singleFret(fret : single): single;
begin
  result := mScaleLength- (mscaleLength / ( power(2,(fret / 12))));
end;

