#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/sndopvarlatchdata_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/ViewAngleServerChange_t.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xbe0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBasePlayerPawn : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            source2sdk::server::CPlayer_WeaponServices* m_pWeaponServices; // 0xa30            
            source2sdk::server::CPlayer_ItemServices* m_pItemServices; // 0xa38            
            source2sdk::server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xa40            
            source2sdk::server::CPlayer_ObserverServices* m_pObserverServices; // 0xa48            
            source2sdk::server::CPlayer_WaterServices* m_pWaterServices; // 0xa50            
            source2sdk::server::CPlayer_UseServices* m_pUseServices; // 0xa58            
            source2sdk::server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xa60            
            source2sdk::server::CPlayer_CameraServices* m_pCameraServices; // 0xa68            
            source2sdk::server::CPlayer_MovementServices* m_pMovementServices; // 0xa70            
            uint8_t _pad0a78[0x8]; // 0xa78
            // metadata: MNotSaved
            // m_ServerViewAngleChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::ViewAngleServerChange_t> m_ServerViewAngleChanges;
            char m_ServerViewAngleChanges[0x68]; // 0xa80            
            QAngle v_angle; // 0xae8            
            QAngle v_anglePrevious; // 0xaf4            
            std::uint32_t m_iHideHUD; // 0xb00            
            uint8_t _pad0b04[0x4]; // 0xb04
            source2sdk::server::sky3dparams_t m_skybox3d; // 0xb08            
            source2sdk::entity2::GameTime_t m_fTimeLastHurt; // 0xb98            
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0xb9c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_fNextSuicideTime; // 0xba0            
            bool m_fInitHUD; // 0xba4            
            uint8_t _pad0ba5[0x3]; // 0xba5
            source2sdk::server::CAI_Expresser* m_pExpresser; // 0xba8            
            // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hController;
            char m_hController[0x4]; // 0xbb0            
            // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hDefaultController;
            char m_hDefaultController[0x4]; // 0xbb4            
            uint8_t _pad0bb8[0x4]; // 0xbb8
            // metadata: MNotSaved
            float m_fHltvReplayDelay; // 0xbbc            
            // metadata: MNotSaved
            float m_fHltvReplayEnd; // 0xbc0            
            // metadata: MNotSaved
            CEntityIndex m_iHltvReplayEntity; // 0xbc4            
            // m_sndOpvarLatchData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sndopvarlatchdata_t> m_sndOpvarLatchData;
            char m_sndOpvarLatchData[0x18]; // 0xbc8            
            
            // Datamap fields:
            // CHandle< CBaseEntity > controller; // 0x7fffffff
            // int32_t InputSetHealth; // 0x0
            // bool InputSetHUDVisibility; // 0x0
            // CUtlSymbolLarge InputSetFogController; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerPawn) == 0xbe0);
    };
};
