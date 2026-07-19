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
        // Size: 0x1240
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_RagdollPropAttached : public source2sdk::client::C_RagdollProp
        {
        public:
            // metadata: MNotSaved
            std::uint32_t m_boneIndexAttached; // 0x1208            
            // metadata: MNotSaved
            std::uint32_t m_ragdollAttachedObjectIndex; // 0x120c            
            // metadata: MNotSaved
            Vector m_attachmentPointBoneSpace; // 0x1210            
            // metadata: MNotSaved
            Vector m_attachmentPointRagdollSpace; // 0x121c            
            // metadata: MNotSaved
            Vector m_vecOffset; // 0x1228            
            // metadata: MNotSaved
            float m_parentTime; // 0x1234            
            // metadata: MNotSaved
            bool m_bHasParent; // 0x1238            
            uint8_t _pad1239[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RagdollPropAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RagdollPropAttached) == 0x1240);
    };
};
