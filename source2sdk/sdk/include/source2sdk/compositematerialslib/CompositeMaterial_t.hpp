#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/GeneratedTextureHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: compositematerialslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace compositematerialslib
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xa0
        // 
        // static metadata: MPropertyElementNameFn
        #pragma pack(push, 1)
        struct CompositeMaterial_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyGroupName "Target Material"
            // metadata: MPropertyAttributeEditor "CompositeMaterialKVInspector"
            KeyValues3 m_TargetKVs; // 0x8            
            // metadata: MPropertyGroupName "Pre-Generated Output Material"
            // metadata: MPropertyAttributeEditor "CompositeMaterialKVInspector"
            KeyValues3 m_PreGenerationKVs; // 0x18            
            uint8_t _pad0028[0x30]; // 0x28
            // metadata: MPropertyGroupName "Generated Composite Material"
            // metadata: MPropertyAttributeEditor "CompositeMaterialKVInspector"
            KeyValues3 m_FinalKVs; // 0x58            
            uint8_t _pad0068[0x18]; // 0x68
            // metadata: MPropertyFriendlyName "Generated Textures"
            // m_vecGeneratedTextures has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::compositematerialslib::GeneratedTextureHandle_t> m_vecGeneratedTextures;
            char m_vecGeneratedTextures[0x18]; // 0x80            
            uint8_t _pad0098[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterial_t, m_TargetKVs) == 0x8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterial_t, m_PreGenerationKVs) == 0x18);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterial_t, m_FinalKVs) == 0x58);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterial_t, m_vecGeneratedTextures) == 0x80);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CompositeMaterial_t) == 0xa0);
    };
};
