#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
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
        // Size: 0xcd0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BasePlayerPawn : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            source2sdk::client::CPlayer_WeaponServices* m_pWeaponServices; // 0xb60            
            source2sdk::client::CPlayer_ItemServices* m_pItemServices; // 0xb68            
            source2sdk::client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xb70            
            source2sdk::client::CPlayer_ObserverServices* m_pObserverServices; // 0xb78            
            source2sdk::client::CPlayer_WaterServices* m_pWaterServices; // 0xb80            
            source2sdk::client::CPlayer_UseServices* m_pUseServices; // 0xb88            
            source2sdk::client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xb90            
            source2sdk::client::CPlayer_CameraServices* m_pCameraServices; // 0xb98            
            source2sdk::client::CPlayer_MovementServices* m_pMovementServices; // 0xba0            
            uint8_t _pad0ba8[0x8]; // 0xba8
            QAngle v_angle; // 0xbb0            
            QAngle v_anglePrevious; // 0xbbc            
            std::uint32_t m_iHideHUD; // 0xbc8            
            uint8_t _pad0bcc[0x4]; // 0xbcc
            source2sdk::client::sky3dparams_t m_skybox3d; // 0xbd0            
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0xc60            
            // metadata: MNotSaved
            Vector m_vecPredictionError; // 0xc64            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flPredictionErrorTime; // 0xc70            
            uint8_t _pad0c74[0x1c]; // 0xc74
            // metadata: MNotSaved
            Vector m_vecLastCameraSetupLocalOrigin; // 0xc90            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastCameraSetupTime; // 0xc9c            
            // metadata: MNotSaved
            float m_flFOVSensitivityAdjust; // 0xca0            
            // metadata: MNotSaved
            float m_flMouseSensitivity; // 0xca4            
            // metadata: MNotSaved
            Vector m_vOldOrigin; // 0xca8            
            // metadata: MNotSaved
            float m_flOldSimulationTime; // 0xcb4            
            // metadata: MNotSaved
            std::int32_t m_nLastExecutedCommandNumber; // 0xcb8            
            // metadata: MNotSaved
            std::int32_t m_nLastExecutedCommandTick; // 0xcbc            
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hController;
            char m_hController[0x4]; // 0xcc0            
            // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hDefaultController;
            char m_hDefaultController[0x4]; // 0xcc4            
            // metadata: MNotSaved
            bool m_bIsSwappingToPredictableController; // 0xcc8            
            uint8_t _pad0cc9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePlayerPawn) == 0xcd0);
    };
};
