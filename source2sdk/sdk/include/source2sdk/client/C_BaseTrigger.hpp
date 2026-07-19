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
        // Size: 0x1098
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BaseTrigger : public source2sdk::client::C_BaseToggle
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0xfb0            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchAll; // 0xfc8            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouch; // 0xfe0            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchAll; // 0xff8            
            source2sdk::entity2::CEntityIOOutput m_OnTouching; // 0x1010            
            source2sdk::entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0x1028            
            source2sdk::entity2::CEntityIOOutput m_OnNotTouching; // 0x1040            
            source2sdk::entity2::CEntityIOOutput m_OnTouchingChanged; // 0x1058            
            // m_hTouchingEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hTouchingEntities;
            char m_hTouchingEntities[0x18]; // 0x1070            
            CUtlSymbolLarge m_iFilterName; // 0x1088            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x1090            
            bool m_bDisabled; // 0x1094            
            uint8_t _pad1095[0x3];
            
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
        
        static_assert(sizeof(source2sdk::client::C_BaseTrigger) == 0x1098);
    };
};
