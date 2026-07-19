#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

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
        // Size: 0x1218
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0x1180            
            bool m_bImportant; // 0x1181            
            uint8_t _pad1182[0x2]; // 0x1182
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0x1184            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0x1188            
            std::int32_t m_iCurrentFriction; // 0x118c            
            std::int32_t m_iMinFriction; // 0x1190            
            std::int32_t m_iMaxFriction; // 0x1194            
            std::int32_t m_iFrictionAnimState; // 0x1198            
            bool m_bReleaseRagdoll; // 0x119c            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0x119d            
            bool m_bFadingOut; // 0x119e            
            uint8_t _pad119f[0x1]; // 0x119f
            float m_flScaleEnd[10]; // 0x11a0            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0x11c8            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0x11f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0x1218);
    };
};
