#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HitGroup_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x98
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
            uint8_t _pad0000[0x7c]; // 0x0
            // metadata: MNotSaved
            bool m_bRegistered; // 0x7c            
            uint8_t _pad007d[0x3]; // 0x7d
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnOuterChanged"
            // metadata: MNotSaved
            // m_hOuter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOuter;
            char m_hOuter[0x4]; // 0x80            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashDataChanged"
            // metadata: MNotSaved
            source2sdk::client::HitGroup_t m_nCritHitGroup; // 0x84            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashDataChanged"
            // metadata: MNotSaved
            std::int32_t m_nBodyGroup; // 0x88            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPermanentlyBroken"
            // metadata: MNotSaved
            bool m_bPermanentlyBroken; // 0x8c            
            uint8_t _pad008d[0x3]; // 0x8d
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nBrokenBodygroupIndex; // 0x90            
            uint8_t _pad0094[0x4];
            
            // Datamap fields:
            // void m_OnBreakDelegate; // 0x60
            // void m_params; // 0x38
            // void m_nBreakEffectsAttachment; // 0x30
            // void m_nBreakTick; // 0x70
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::WeakPoint_t, m_bRegistered) == 0x7c);
        static_assert(offsetof(source2sdk::server::WeakPoint_t, m_hOuter) == 0x80);
        static_assert(offsetof(source2sdk::server::WeakPoint_t, m_nCritHitGroup) == 0x84);
        static_assert(offsetof(source2sdk::server::WeakPoint_t, m_nBodyGroup) == 0x88);
        static_assert(offsetof(source2sdk::server::WeakPoint_t, m_bPermanentlyBroken) == 0x8c);
        static_assert(offsetof(source2sdk::server::WeakPoint_t, m_nBrokenBodygroupIndex) == 0x90);
        
        static_assert(sizeof(source2sdk::server::WeakPoint_t) == 0x98);
    };
};
