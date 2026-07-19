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
        // Size: 0xd40
        // Has VTable
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0xca8            
            bool m_bImportant; // 0xca9            
            uint8_t _pad0caa[0x2]; // 0xcaa
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0xcac            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0xcb0            
            std::int32_t m_iCurrentFriction; // 0xcb4            
            std::int32_t m_iMinFriction; // 0xcb8            
            std::int32_t m_iMaxFriction; // 0xcbc            
            std::int32_t m_iFrictionAnimState; // 0xcc0            
            bool m_bReleaseRagdoll; // 0xcc4            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xcc5            
            bool m_bFadingOut; // 0xcc6            
            uint8_t _pad0cc7[0x1]; // 0xcc7
            float m_flScaleEnd[10]; // 0xcc8            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0xcf0            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xd18            
            
            // Datamap fields:
            // Color m_clrRender; // 0x6a8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0xd40);
    };
};
