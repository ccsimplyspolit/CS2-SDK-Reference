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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationLayer
        {
        public:
            // m_hSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::int32_t> m_hSequence;
            char m_hSequence[0xc]; // 0x0            
            float m_flPrevCycle; // 0xc            
            // m_flCycle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flCycle;
            char m_flCycle[0xc]; // 0x10            
            // m_flWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flWeight;
            char m_flWeight[0xc]; // 0x1c            
            // m_nOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::int32_t> m_nOrder;
            char m_nOrder[0xc]; // 0x28            
            bool m_bLooping; // 0x34            
            uint8_t _pad0035[0x3]; // 0x35
            std::int32_t m_nFlags; // 0x38            
            bool m_bSequenceFinished; // 0x3c            
            uint8_t _pad003d[0x3]; // 0x3d
            float m_flKillRate; // 0x40            
            float m_flKillDelay; // 0x44            
            std::int32_t m_nPriority; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_hSequence) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_flPrevCycle) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_flCycle) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_flWeight) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_nOrder) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_bLooping) == 0x34);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_nFlags) == 0x38);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_bSequenceFinished) == 0x3c);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_flKillRate) == 0x40);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_flKillDelay) == 0x44);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationLayer, m_nPriority) == 0x48);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimationLayer) == 0x4c);
    };
};
