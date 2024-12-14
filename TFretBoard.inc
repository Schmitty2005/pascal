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

type 
  TFretBoard = class

  private 
    isMetric : Boolean = True; 
    isImperial : Boolean = False;
    mScaleLength : single ;  //need scale length in mm for default
    mNumFrets : single = 24;
    function TextOutput :  wideString;
    function singleFret : single;
    

  public 
    constructor Create ; overload;

    destructor Destroy; override;

  published
    property ScaleLegth read GetScaleLength write SetScaleLength default 25.5;
    property NumFrets read GetNumFrets write SetNumFrets default 24; 
    property Metric read UnitType write ChangeUnits default true;
    Property Imperial read UnitType write ChangeUnits default false; 


    end;

constructor TFretBoard.Create;
begin
  
end;

destructor TFretBoard.Destroy;
begin
  
end;

function TFretBoard.TextOutput: wideString;
begin
  
end;

function TFretBoard.singleFret: single;
begin
  
end;
