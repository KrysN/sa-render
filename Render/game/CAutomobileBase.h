/*
    SA::Render source file
    CAutomobileBase structure
*/
#pragma once
#include "CVehicleBase.h"
#include "CDamageManager.h"
#include "CAutomobileDoor.h"
#include "HeliComponents.h"
#include "CAutomobilePanel.h"
#include "CColPoint.h"
#include "CEntity.h"
#include "RenderWare.h"

#pragma pack(push, 1)
struct CAutomobileBase
{
    CVehicleBase vehicle;
    CDamageManager m_sDamageManager;
    CAutomobileDoor m_sDoor[6];
    HeliComponents m_pNode;
    char gap_69C[12];
    CAutomobilePanel m_sPanel[3];
    CAutomobileDoor m_sSwingingChassis;
    CColPoint m_sWheelColPoint[4];
    float wheelsDistancesToGround1[4];
    float wheelsDistancesToGround2[4];
    float field_7F4[4];
    float field_800;
    int field_804;
    int field_80C;
    int field_810[4];
    char field_81C[4];
    int field_820;
    int field_824[4];
    float field_838[4];
    int field_848[4];
    int field_858[4];
    char TaxiAvaliable;
    char field_869;
    char field_86A;
    char field_867;
    short m_wMiscComponentTime;
    short field_86E;
    int someEndTime;
    int someStartTime;
    float field_878;
    float wheelOffsetZ[4];
    int field_88C[3];
    float frontHeightAboveRoad;
    float rearHeightAboveRoad;
    float field_8A0;
    float fNitroValue;
    int field_8A4;
    int field_8A8;
    int field_8B0;
    int field_8B4[6];
    int field_8C8[6];
    int burnTimer;
    CEntity *wheelCollisionEntity[4];
    RwV3D wheelCollisionPos[4];
    char field_924;
    char field_925;
    char field_926;
    char field_927;
    char field_928;
    char field_929;
    char field_92A;
    char field_92B;
    char field_92C;
    char field_92D;
    char field_92E;
    char field_92F;
    char field_930;
    char field_931;
    char field_932;
    char field_933;
    char field_934;
    char field_935;
    char field_936;
    char field_937;
    char field_938;
    char field_939;
    char field_93A;
    char field_93B;
    char field_93C;
    char field_93D;
    char field_93E;
    char field_93F;
    int field_940;
    int field_944;
    float m_fDoomVerticalRotation;
    float m_fDoomHorizontalRotation;
    int fForcedHeading;
    float m_fUpDownLightAngle[2];
    char numContactWheels;
    char allWheelsOnGround;
    char field_962;
    char field_963;
    int field_964;
    int field_968[4];
    int pNitroParticle1;
    int pNitroParticle2;
    char field_980;
    char field_981;
    short field_982;
    float field_984;
};
#pragma pack(pop)