#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_RagdollProp.hpp"

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
        // Size: 0xd18
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_RagdollPropAttached : public source2sdk::client::C_RagdollProp
        {
        public:
            // metadata: MNotSaved
            std::uint32_t m_boneIndexAttached; // 0xce0            
            // metadata: MNotSaved
            std::uint32_t m_ragdollAttachedObjectIndex; // 0xce4            
            // metadata: MNotSaved
            Vector m_attachmentPointBoneSpace; // 0xce8            
            // metadata: MNotSaved
            Vector m_attachmentPointRagdollSpace; // 0xcf4            
            // metadata: MNotSaved
            Vector m_vecOffset; // 0xd00            
            // metadata: MNotSaved
            float m_parentTime; // 0xd0c            
            // metadata: MNotSaved
            bool m_bHasParent; // 0xd10            
            uint8_t _pad0d11[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RagdollPropAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RagdollPropAttached) == 0xd18);
    };
};
