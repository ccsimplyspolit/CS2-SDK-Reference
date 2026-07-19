#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/IntroCamera_t.hpp"
#include "source2sdk/client/PostProcessEffectDef_t.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x7c0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_CinematicIntro_Player_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            float m_flZiplineStartDelayDuration; // 0x750            
            uint8_t _pad0754[0x4]; // 0x754
            // m_vecPostProcessEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PostProcessEffectDef_t> m_vecPostProcessEffects;
            char m_vecPostProcessEffects[0x18]; // 0x758            
            bool m_bTeamSpecificCameras; // 0x770            
            uint8_t _pad0771[0x7]; // 0x771
            // metadata: MPropertySuppressExpr "m_bTeamSpecificCameras == false"
            // m_vecIntroCameraSequenceAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::IntroCamera_t> m_vecIntroCameraSequenceAmber;
            char m_vecIntroCameraSequenceAmber[0x18]; // 0x778            
            // metadata: MPropertySuppressExpr "m_bTeamSpecificCameras == false"
            // m_vecIntroCameraSequenceSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::IntroCamera_t> m_vecIntroCameraSequenceSapphire;
            char m_vecIntroCameraSequenceSapphire[0x18]; // 0x790            
            // metadata: MPropertySuppressExpr "m_bTeamSpecificCameras == true"
            // m_vecIntroCameraSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::IntroCamera_t> m_vecIntroCameraSequence;
            char m_vecIntroCameraSequence[0x18]; // 0x7a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CinematicIntro_Player_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_CinematicIntro_Player_VData) == 0x7c0);
    };
};
