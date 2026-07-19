#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HitGroup_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hOuter"
        // static metadata: MNetworkVarNames "HitGroup_t m_nCritHitGroup"
        // static metadata: MNetworkVarNames "int m_nBodyGroup"
        // static metadata: MNetworkVarNames "bool m_bPermanentlyBroken"
        // static metadata: MNetworkVarNames "int m_nBrokenBodygroupIndex"
        #pragma pack(push, 1)
        struct WeakPoint_t
        {
        public:
            uint8_t _pad0000[0x3c]; // 0x0
            // metadata: MNotSaved
            bool m_bRegistered; // 0x3c            
            uint8_t _pad003d[0x3]; // 0x3d
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnOuterChanged"
            // metadata: MNotSaved
            // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOuter;
            char m_hOuter[0x4]; // 0x40            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashDataChanged"
            // metadata: MNotSaved
            source2sdk::client::HitGroup_t m_nCritHitGroup; // 0x44            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashDataChanged"
            // metadata: MNotSaved
            std::int32_t m_nBodyGroup; // 0x48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPermanentlyBroken"
            // metadata: MNotSaved
            bool m_bPermanentlyBroken; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nBrokenBodygroupIndex; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::WeakPoint_t, m_bRegistered) == 0x3c);
        static_assert(offsetof(source2sdk::client::WeakPoint_t, m_hOuter) == 0x40);
        static_assert(offsetof(source2sdk::client::WeakPoint_t, m_nCritHitGroup) == 0x44);
        static_assert(offsetof(source2sdk::client::WeakPoint_t, m_nBodyGroup) == 0x48);
        static_assert(offsetof(source2sdk::client::WeakPoint_t, m_bPermanentlyBroken) == 0x4c);
        static_assert(offsetof(source2sdk::client::WeakPoint_t, m_nBrokenBodygroupIndex) == 0x50);
        
        static_assert(sizeof(source2sdk::client::WeakPoint_t) == 0x58);
    };
};
