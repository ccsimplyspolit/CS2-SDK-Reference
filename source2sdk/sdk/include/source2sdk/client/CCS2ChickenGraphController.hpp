#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

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
        // Size: 0x140
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCS2ChickenGraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_action has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_action;
            char m_action[0x18]; // 0x88            
            CAnimGraph2ParamAutoResetOptionalRef m_bActionReset; // 0xa0            
            // m_idleVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_idleVariation;
            char m_idleVariation[0x18]; // 0xc0            
            // m_runVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_runVariation;
            char m_runVariation[0x18]; // 0xd8            
            // m_panicVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_panicVariation;
            char m_panicVariation[0x18]; // 0xf0            
            // m_squatVariation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<float> m_squatVariation;
            char m_squatVariation[0x18]; // 0x108            
            // m_bInWater has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<bool> m_bInWater;
            char m_bInWater[0x18]; // 0x120            
            bool m_bHasActionCompletedEvent; // 0x138            
            bool m_bWaitingForCompletedEvent; // 0x139            
            uint8_t _pad013a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCS2ChickenGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCS2ChickenGraphController) == 0x140);
    };
};
