#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/CompositeMaterialEditorPoint_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: compositematerialslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace compositematerialslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCompositeMaterialEditorDoc
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::int32_t m_nVersion; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // m_Points has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::CompositeMaterialEditorPoint_t> m_Points;
            char m_Points[0x18]; // 0x10            
            KeyValues3 m_KVthumbnail; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CCompositeMaterialEditorDoc, m_nVersion) == 0x8);
        static_assert(offsetof(source2sdk::compositematerialslib::CCompositeMaterialEditorDoc, m_Points) == 0x10);
        static_assert(offsetof(source2sdk::compositematerialslib::CCompositeMaterialEditorDoc, m_KVthumbnail) == 0x28);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CCompositeMaterialEditorDoc) == 0x38);
    };
};
