#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/sndopvarlatchdata_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_Expresser;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_AutoaimServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_CameraServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_FlashlightServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_ItemServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_MovementServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_ObserverServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_UseServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_WaterServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPlayer_WeaponServices;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBasePlayerPawn : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            source2sdk::server::CPlayer_WeaponServices* m_pWeaponServices; // 0x868            
            source2sdk::server::CPlayer_ItemServices* m_pItemServices; // 0x870            
            source2sdk::server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0x878            
            source2sdk::server::CPlayer_ObserverServices* m_pObserverServices; // 0x880            
            source2sdk::server::CPlayer_WaterServices* m_pWaterServices; // 0x888            
            source2sdk::server::CPlayer_UseServices* m_pUseServices; // 0x890            
            source2sdk::server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0x898            
            source2sdk::server::CPlayer_CameraServices* m_pCameraServices; // 0x8a0            
            source2sdk::server::CPlayer_MovementServices* m_pMovementServices; // 0x8a8            
            uint8_t _pad08b0[0x8]; // 0x8b0
            QAngle v_angle; // 0x8b8            
            QAngle v_anglePrevious; // 0x8c4            
            std::uint32_t m_iHideHUD; // 0x8d0            
            uint8_t _pad08d4[0x4]; // 0x8d4
            source2sdk::server::sky3dparams_t m_skybox3d; // 0x8d8            
            source2sdk::entity2::GameTime_t m_fTimeLastHurt; // 0x968            
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x96c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_fNextSuicideTime; // 0x970            
            bool m_fInitHUD; // 0x974            
            uint8_t _pad0975[0x3]; // 0x975
            source2sdk::server::CAI_Expresser* m_pExpresser; // 0x978            
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hController;
            char m_hController[0x4]; // 0x980            
            // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hDefaultController;
            char m_hDefaultController[0x4]; // 0x984            
            uint8_t _pad0988[0x4]; // 0x988
            // metadata: MNotSaved
            float m_fHltvReplayDelay; // 0x98c            
            // metadata: MNotSaved
            float m_fHltvReplayEnd; // 0x990            
            // metadata: MNotSaved
            CEntityIndex m_iHltvReplayEntity; // 0x994            
            // m_sndOpvarLatchData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sndopvarlatchdata_t> m_sndOpvarLatchData;
            char m_sndOpvarLatchData[0x18]; // 0x998            
            
            // Datamap fields:
            // CHandle< CBaseEntity > controller; // 0x7fffffff
            // int32_t InputSetHealth; // 0x0
            // bool InputSetHUDVisibility; // 0x0
            // CUtlSymbolLarge InputSetFogController; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerPawn) == 0x9b0);
    };
};
