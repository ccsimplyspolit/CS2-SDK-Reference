#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ItemDraftBucketing_t
        {
        public:
            CUtlString m_strBucketName; // 0x0            
            // m_mapBuckets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,float> m_mapBuckets;
            char m_mapBuckets[0x28]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemDraftBucketing_t, m_strBucketName) == 0x0);
        static_assert(offsetof(source2sdk::client::ItemDraftBucketing_t, m_mapBuckets) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ItemDraftBucketing_t) == 0x30);
    };
};
