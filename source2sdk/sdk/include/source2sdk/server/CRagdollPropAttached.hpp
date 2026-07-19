#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CRagdollProp.hpp"

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
        // Size: 0xb60
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRagdollPropAttached : public source2sdk::server::CRagdollProp
        {
        public:
            std::uint32_t m_boneIndexAttached; // 0xb20            
            std::uint32_t m_ragdollAttachedObjectIndex; // 0xb24            
            Vector m_attachmentPointBoneSpace; // 0xb28            
            Vector m_attachmentPointRagdollSpace; // 0xb34            
            bool m_bShouldDetach; // 0xb40            
            uint8_t _pad0b41[0xf]; // 0xb41
            // metadata: MNotSaved
            bool m_bShouldDeleteAttachedActivationRecord; // 0xb50            
            uint8_t _pad0b51[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollPropAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollPropAttached) == 0xb60);
    };
};
