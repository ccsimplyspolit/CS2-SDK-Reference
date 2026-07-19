#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PairedSequence_t
        {
        public:
            CGlobalSymbol m_sRole; // 0x0            
            CGlobalSymbol m_sSequenceName; // 0x8            
            // m_hSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::uint32_t> m_hSequence;
            char m_hSequence[0xc]; // 0x10            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::PairedSequence_t, m_sRole) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::PairedSequence_t, m_sSequenceName) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::PairedSequence_t, m_hSequence) == 0x10);
        
        static_assert(sizeof(source2sdk::animgraphlib::PairedSequence_t) == 0x20);
    };
};
