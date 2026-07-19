#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x500
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_BaseNPCGraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_sCurrScheduleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sCurrScheduleName;
            char m_sCurrScheduleName[0x30]; // 0x90            
            // m_sCurrTaskName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sCurrTaskName;
            char m_sCurrTaskName[0x30]; // 0xc0            
            // m_sMovementBodySection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sMovementBodySection;
            char m_sMovementBodySection[0x30]; // 0xf0            
            // m_sActionBodySection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sActionBodySection;
            char m_sActionBodySection[0x30]; // 0x120            
            // m_sNavLinkSelection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_sNavLinkSelection;
            char m_sNavLinkSelection[0x18]; // 0x150            
            // m_vecNavLinkTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vecNavLinkTarget;
            char m_vecNavLinkTarget[0x28]; // 0x168            
            // m_vecNavLinkUp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<Vector> m_vecNavLinkUp;
            char m_vecNavLinkUp[0x28]; // 0x190            
            CAnimGraphTagOptionalRef m_sMovementTransitionForceFacingDisabled; // 0x1b8            
            // m_flEnemyDistance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flEnemyDistance;
            char m_flEnemyDistance[0x28]; // 0x1d8            
            // m_flEnemyDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flEnemyDirection;
            char m_flEnemyDirection[0x28]; // 0x200            
            // m_bCanSeeEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bCanSeeEnemy;
            char m_bCanSeeEnemy[0x28]; // 0x228            
            // m_bEnemyFacingMe has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bEnemyFacingMe;
            char m_bEnemyFacingMe[0x28]; // 0x250            
            // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bHitTrigger;
            char m_bHitTrigger[0x28]; // 0x278            
            // m_pszNPCState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_pszNPCState;
            char m_pszNPCState[0x30]; // 0x2a0            
            // m_bStunned has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bStunned;
            char m_bStunned[0x28]; // 0x2d0            
            // m_sBodyIdle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sBodyIdle;
            char m_sBodyIdle[0x30]; // 0x2f8            
            // m_sFlashlightMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_sFlashlightMode;
            char m_sFlashlightMode[0x30]; // 0x328            
            // m_flFlightSpeedNormalized has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flFlightSpeedNormalized;
            char m_flFlightSpeedNormalized[0x28]; // 0x358            
            // m_bMoveSolveNudgeActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bMoveSolveNudgeActive;
            char m_bMoveSolveNudgeActive[0x28]; // 0x380            
            // m_flMoveSolveNudgeYaw has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flMoveSolveNudgeYaw;
            char m_flMoveSolveNudgeYaw[0x28]; // 0x3a8            
            // m_pszDoorOpenAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_pszDoorOpenAction;
            char m_pszDoorOpenAction[0x30]; // 0x3d0            
            // m_flDistanceToDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flDistanceToDoor;
            char m_flDistanceToDoor[0x28]; // 0x400            
            // m_bDoorLeft has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bDoorLeft;
            char m_bDoorLeft[0x28]; // 0x428            
            // m_bIsNonZUp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bIsNonZUp;
            char m_bIsNonZUp[0x28]; // 0x450            
            // m_bEnemyInVehicle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bEnemyInVehicle;
            char m_bEnemyInVehicle[0x28]; // 0x478            
            // m_eVehicleMeleeSide has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<CGlobalSymbol> m_eVehicleMeleeSide;
            char m_eVehicleMeleeSide[0x30]; // 0x4a0            
            // m_bEnableMLLocomotion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bEnableMLLocomotion;
            char m_bEnableMLLocomotion[0x28]; // 0x4d0            
            std::int32_t m_nNavLinkExternalGraphSlot; // 0x4f8            
            uint8_t _pad04fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPCGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAI_BaseNPCGraphController) == 0x500);
    };
};
