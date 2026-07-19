#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/audioparams_t.hpp"
#include "source2sdk/server/fogplayerparams_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CColorCorrection;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CEnvSoundscapeTriggerable;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPostProcessingVolume;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CTonemapController2;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x178
        // Has VTable
        #pragma pack(push, 1)
        class CPlayer_CameraServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            QAngle m_vecCsViewPunchAngle; // 0x48            
            source2sdk::entity2::GameTick_t m_nCsViewPunchAngleTick; // 0x54            
            float m_flCsViewPunchAngleTickRatio; // 0x58            
            uint8_t _pad005c[0x4]; // 0x5c
            source2sdk::server::fogplayerparams_t m_PlayerFog; // 0x60            
            // m_hColorCorrectionCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CColorCorrection> m_hColorCorrectionCtrl;
            char m_hColorCorrectionCtrl[0x4]; // 0xa0            
            // m_hViewEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewEntity;
            char m_hViewEntity[0x4]; // 0xa4            
            // m_hTonemapController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CTonemapController2> m_hTonemapController;
            char m_hTonemapController[0x4]; // 0xa8            
            uint8_t _pad00ac[0x4]; // 0xac
            source2sdk::server::audioparams_t m_audio; // 0xb0            
            // m_PostProcessingVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CPostProcessingVolume>> m_PostProcessingVolumes;
            char m_PostProcessingVolumes[0x18]; // 0x128            
            float m_flOldPlayerZ; // 0x140            
            float m_flOldPlayerViewOffsetZ; // 0x144            
            uint8_t _pad0148[0x18]; // 0x148
            // m_hTriggerSoundscapeList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CEnvSoundscapeTriggerable>> m_hTriggerSoundscapeList;
            char m_hTriggerSoundscapeList[0x18]; // 0x160            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_CameraServices) == 0x178);
    };
};
