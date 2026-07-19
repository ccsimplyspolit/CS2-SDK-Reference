#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/ViewAngleServerChange_t.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_AutoaimServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_CameraServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_FlashlightServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_ItemServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_MovementServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_ObserverServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_UseServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_WaterServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CPlayer_WeaponServices;
    };
};

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
        // Size: 0x13e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BasePlayerPawn : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            source2sdk::client::CPlayer_WeaponServices* m_pWeaponServices; // 0x1208            
            source2sdk::client::CPlayer_ItemServices* m_pItemServices; // 0x1210            
            source2sdk::client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0x1218            
            source2sdk::client::CPlayer_ObserverServices* m_pObserverServices; // 0x1220            
            source2sdk::client::CPlayer_WaterServices* m_pWaterServices; // 0x1228            
            source2sdk::client::CPlayer_UseServices* m_pUseServices; // 0x1230            
            source2sdk::client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0x1238            
            source2sdk::client::CPlayer_CameraServices* m_pCameraServices; // 0x1240            
            source2sdk::client::CPlayer_MovementServices* m_pMovementServices; // 0x1248            
            uint8_t _pad1250[0x8]; // 0x1250
            // metadata: MNotSaved
            // m_ServerViewAngleChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ViewAngleServerChange_t> m_ServerViewAngleChanges;
            char m_ServerViewAngleChanges[0x68]; // 0x1258            
            QAngle v_angle; // 0x12c0            
            QAngle v_anglePrevious; // 0x12cc            
            std::uint32_t m_iHideHUD; // 0x12d8            
            uint8_t _pad12dc[0x4]; // 0x12dc
            source2sdk::client::sky3dparams_t m_skybox3d; // 0x12e0            
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x1370            
            // metadata: MNotSaved
            Vector m_vecPredictionError; // 0x1374            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flPredictionErrorTime; // 0x1380            
            uint8_t _pad1384[0x1c]; // 0x1384
            // metadata: MNotSaved
            Vector m_vecLastCameraSetupLocalOrigin; // 0x13a0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastCameraSetupTime; // 0x13ac            
            // metadata: MNotSaved
            float m_flFOVSensitivityAdjust; // 0x13b0            
            // metadata: MNotSaved
            float m_flMouseSensitivity; // 0x13b4            
            // metadata: MNotSaved
            Vector m_vOldOrigin; // 0x13b8            
            // metadata: MNotSaved
            float m_flOldSimulationTime; // 0x13c4            
            // metadata: MNotSaved
            std::int32_t m_nLastExecutedCommandNumber; // 0x13c8            
            // metadata: MNotSaved
            std::int32_t m_nLastExecutedCommandTick; // 0x13cc            
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hController;
            char m_hController[0x4]; // 0x13d0            
            // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hDefaultController;
            char m_hDefaultController[0x4]; // 0x13d4            
            // metadata: MNotSaved
            bool m_bIsSwappingToPredictableController; // 0x13d8            
            uint8_t _pad13d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePlayerPawn) == 0x13e0);
    };
};
