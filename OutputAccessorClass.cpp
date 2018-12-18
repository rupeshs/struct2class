class CTestAccessor
{
public:
	short  NumberOfLanes;
	short  SectionId;
	short  SectionVersion;
	TCHAR  SectionIdentifier[11];
	TCHAR  SectionName[101];
	DBTIMESTAMP RecordVersionTime;
	float  Longitude;
	float  Latitude;
	float  StartPointLongitude;
	float  StartPointLatitude;
	float  EndPointLongitude;
	float  EndPointLatitude;
	TCHAR  AlertCCountryCode[51];
	TCHAR  AlertCTableNumber[51];
	TCHAR  AlertCTableVersion[51];
	int    Direction;
	int    PrimaryPointOffsetDistance;
	int    SecondaryPointOffsetDistance;
	int    PrimaryPointLocationNr;
	int    SecondaryPointLocationNr;
	float  Accuracy;	

	DBSTATUS m_dwNumberOfLanesStatus;
	DBSTATUS m_dwSectionIdStatus;
	DBSTATUS m_dwSectionVersionStatus;
	DBSTATUS m_dwSectionIdentifierStatus;
	DBSTATUS m_dwSectionNameStatus;
	DBSTATUS m_dwRecordVersionTimeStatus;
	DBSTATUS m_dwLongitudeStatus;
	DBSTATUS m_dwLatitudeStatus;
	DBSTATUS m_dwStartPointLongitudeStatus;
	DBSTATUS m_dwStartPointLatitudeStatus;
	DBSTATUS m_dwEndPointLongitudeStatus;
	DBSTATUS m_dwEndPointLatitudeStatus;
	DBSTATUS m_dwAlertCCountryCodeStatus;
	DBSTATUS m_dwAlertCTableNumberStatus;
	DBSTATUS m_dwAlertCTableVersionStatus;
	DBSTATUS m_dwDirectionStatus;
	DBSTATUS m_dwPrimaryPointOffsetDistanceStatus;
	DBSTATUS m_dwSecondaryPointOffsetDistanceStatus;
	DBSTATUS m_dwPrimaryPointLocationNrStatus;
	DBSTATUS m_dwSecondaryPointLocationNrStatus;
	DBSTATUS m_dwAccuracyStatus;

	DBLENGTH m_dwNumberOfLanesLength;
	DBLENGTH m_dwSectionIdLength;
	DBLENGTH m_dwSectionVersionLength;
	DBLENGTH m_dwSectionIdentifierLength;
	DBLENGTH m_dwSectionNameLength;
	DBLENGTH m_dwRecordVersionTimeLength;
	DBLENGTH m_dwLongitudeLength;
	DBLENGTH m_dwLatitudeLength;
	DBLENGTH m_dwStartPointLongitudeLength;
	DBLENGTH m_dwStartPointLatitudeLength;
	DBLENGTH m_dwEndPointLongitudeLength;
	DBLENGTH m_dwEndPointLatitudeLength;
	DBLENGTH m_dwAlertCCountryCodeLength;
	DBLENGTH m_dwAlertCTableNumberLength;
	DBLENGTH m_dwAlertCTableVersionLength;
	DBLENGTH m_dwDirectionLength;
	DBLENGTH m_dwPrimaryPointOffsetDistanceLength;
	DBLENGTH m_dwSecondaryPointOffsetDistanceLength;
	DBLENGTH m_dwPrimaryPointLocationNrLength;
	DBLENGTH m_dwSecondaryPointLocationNrLength;
	DBLENGTH m_dwAccuracyLength;

DEFINE_COMMAND_EX(CTestAccessor, L"{ CALL dbo.Spc_GetTestData(?) }")

BEGIN_COLUMN_MAP(CTestAccessor)
	COLUMN_ENTRY_LENGTH_STATUS(1,NumberOfLanes,m_dwNumberOfLanesLength,m_dwNumberOfLanesStatus);
	COLUMN_ENTRY_LENGTH_STATUS(2,SectionId,m_dwSectionIdLength,m_dwSectionIdStatus);
	COLUMN_ENTRY_LENGTH_STATUS(3,SectionVersion,m_dwSectionVersionLength,m_dwSectionVersionStatus);
	COLUMN_ENTRY_LENGTH_STATUS(4,SectionIdentifier,m_dwSectionIdentifierLength,m_dwSectionIdentifierStatus);
	COLUMN_ENTRY_LENGTH_STATUS(5,SectionName,m_dwSectionNameLength,m_dwSectionNameStatus);
	COLUMN_ENTRY_LENGTH_STATUS(6,RecordVersionTime,m_dwRecordVersionTimeLength,m_dwRecordVersionTimeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(7,Longitude,m_dwLongitudeLength,m_dwLongitudeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(8,Latitude,m_dwLatitudeLength,m_dwLatitudeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(9,StartPointLongitude,m_dwStartPointLongitudeLength,m_dwStartPointLongitudeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(10,StartPointLatitude,m_dwStartPointLatitudeLength,m_dwStartPointLatitudeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(11,EndPointLongitude,m_dwEndPointLongitudeLength,m_dwEndPointLongitudeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(12,EndPointLatitude,m_dwEndPointLatitudeLength,m_dwEndPointLatitudeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(13,AlertCCountryCode,m_dwAlertCCountryCodeLength,m_dwAlertCCountryCodeStatus);
	COLUMN_ENTRY_LENGTH_STATUS(14,AlertCTableNumber,m_dwAlertCTableNumberLength,m_dwAlertCTableNumberStatus);
	COLUMN_ENTRY_LENGTH_STATUS(15,AlertCTableVersion,m_dwAlertCTableVersionLength,m_dwAlertCTableVersionStatus);
	COLUMN_ENTRY_LENGTH_STATUS(16,Direction,m_dwDirectionLength,m_dwDirectionStatus);
	COLUMN_ENTRY_LENGTH_STATUS(17,PrimaryPointOffsetDistance,m_dwPrimaryPointOffsetDistanceLength,m_dwPrimaryPointOffsetDistanceStatus);
	COLUMN_ENTRY_LENGTH_STATUS(18,SecondaryPointOffsetDistance,m_dwSecondaryPointOffsetDistanceLength,m_dwSecondaryPointOffsetDistanceStatus);
	COLUMN_ENTRY_LENGTH_STATUS(19,PrimaryPointLocationNr,m_dwPrimaryPointLocationNrLength,m_dwPrimaryPointLocationNrStatus);
	COLUMN_ENTRY_LENGTH_STATUS(20,SecondaryPointLocationNr,m_dwSecondaryPointLocationNrLength,m_dwSecondaryPointLocationNrStatus);
	COLUMN_ENTRY_LENGTH_STATUS(21,Accuracy,m_dwAccuracyLength,m_dwAccuracyStatus);
END_COLUMN_MAP()
};