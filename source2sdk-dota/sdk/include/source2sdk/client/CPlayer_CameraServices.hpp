#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/C_fogplayerparams_t.hpp"
#include "source2sdk/client/audioparams_t.hpp"
#include "source2sdk/client/fogparams_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_ColorCorrection;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_FogController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_PostProcessingVolume;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_TonemapController2;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x278
        // Has VTable
        #pragma pack(push, 1)
        class CPlayer_CameraServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            source2sdk::client::C_fogplayerparams_t m_PlayerFog; // 0x48            
            // m_hColorCorrectionCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_ColorCorrection> m_hColorCorrectionCtrl;
            char m_hColorCorrectionCtrl[0x4]; // 0x88            
            // m_hViewEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hViewEntity;
            char m_hViewEntity[0x4]; // 0x8c            
            // m_hTonemapController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_TonemapController2> m_hTonemapController;
            char m_hTonemapController[0x4]; // 0x90            
            uint8_t _pad0094[0x4]; // 0x94
            source2sdk::client::audioparams_t m_audio; // 0x98            
            // m_PostProcessingVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_PostProcessingVolume>> m_PostProcessingVolumes;
            char m_PostProcessingVolumes[0x18]; // 0x110            
            float m_flOldPlayerZ; // 0x128            
            float m_flOldPlayerViewOffsetZ; // 0x12c            
            source2sdk::client::fogparams_t m_CurrentFog; // 0x130            
            // m_hOldFogController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_FogController> m_hOldFogController;
            char m_hOldFogController[0x4]; // 0x198            
            bool m_bOverrideFogColor[5]; // 0x19c            
            Color m_OverrideFogColor[5]; // 0x1a1            
            bool m_bOverrideFogStartEnd[5]; // 0x1b5            
            uint8_t _pad01ba[0x2]; // 0x1ba
            float m_fOverrideFogStart[5]; // 0x1bc            
            float m_fOverrideFogEnd[5]; // 0x1d0            
            // m_hActivePostProcessingVolume has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PostProcessingVolume> m_hActivePostProcessingVolume;
            char m_hActivePostProcessingVolume[0x4]; // 0x1e4            
            QAngle m_angDemoViewAngles; // 0x1e8            
            uint8_t _pad01f4[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_CameraServices) == 0x278);
    };
};
