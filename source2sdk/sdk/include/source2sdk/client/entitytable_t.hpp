#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SaveRestoreTableFlags_t.hpp"
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityKeyValues;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct entitytable_t
        {
        public:
            std::int32_t id; // 0x0            
            CEntityIndex edictindex; // 0x4            
            CEntityIndex saveentityindex; // 0x8            
            uint8_t _pad000c[0x8]; // 0xc
            bool bWasSaved; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            source2sdk::client::SaveRestoreTableFlags_t flags; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CUtlSymbolLarge classname; // 0x20            
            CUtlSymbolLarge globalname; // 0x28            
            CUtlSymbolLarge entityname; // 0x30            
            Vector landmarkModelSpace; // 0x38            
            uint8_t _pad0044[0x4]; // 0x44
            source2sdk::entity2::CEntityKeyValues* m_pPrecacheEntityKeys; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::entitytable_t, id) == 0x0);
        static_assert(offsetof(source2sdk::client::entitytable_t, edictindex) == 0x4);
        static_assert(offsetof(source2sdk::client::entitytable_t, saveentityindex) == 0x8);
        static_assert(offsetof(source2sdk::client::entitytable_t, bWasSaved) == 0x14);
        static_assert(offsetof(source2sdk::client::entitytable_t, flags) == 0x18);
        static_assert(offsetof(source2sdk::client::entitytable_t, classname) == 0x20);
        static_assert(offsetof(source2sdk::client::entitytable_t, globalname) == 0x28);
        static_assert(offsetof(source2sdk::client::entitytable_t, entityname) == 0x30);
        static_assert(offsetof(source2sdk::client::entitytable_t, landmarkModelSpace) == 0x38);
        static_assert(offsetof(source2sdk::client::entitytable_t, m_pPrecacheEntityKeys) == 0x48);
        
        static_assert(sizeof(source2sdk::client::entitytable_t) == 0x50);
    };
};
