#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseToggle.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseFilter;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb70
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BaseTrigger : public source2sdk::client::C_BaseToggle
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0xa88            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchAll; // 0xaa0            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouch; // 0xab8            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchAll; // 0xad0            
            source2sdk::entity2::CEntityIOOutput m_OnTouching; // 0xae8            
            source2sdk::entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0xb00            
            source2sdk::entity2::CEntityIOOutput m_OnNotTouching; // 0xb18            
            source2sdk::entity2::CEntityIOOutput m_OnTouchingChanged; // 0xb30            
            // m_hTouchingEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hTouchingEntities;
            char m_hTouchingEntities[0x18]; // 0xb48            
            CUtlSymbolLarge m_iFilterName; // 0xb60            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0xb68            
            bool m_bDisabled; // 0xb6c            
            uint8_t _pad0b6d[0x3];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // void InputTouchTest; // 0x0
            // void InputStartTouch; // 0x0
            // void InputEndTouch; // 0x0
            // bool okifnomodel; // 0x7fffffff
            // float radius; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseTrigger) == 0xb70);
    };
};
