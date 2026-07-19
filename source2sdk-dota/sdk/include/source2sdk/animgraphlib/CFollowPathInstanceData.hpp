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
        // Size: 0x24
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFollowPathInstanceData
        {
        public:
            // m_xLastPredictedTransformsDeltas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CRelativeArray<CMotionTransform> m_xLastPredictedTransformsDeltas;
            char m_xLastPredictedTransformsDeltas[0x8]; // 0x0            
            float m_dampedTurnValue; // 0x8            
            float m_flTurnAmount; // 0xc            
            // m_flPredictionScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flPredictionScale;
            char m_flPredictionScale[0xc]; // 0x10            
            float m_flLastPathTime; // 0x1c            
            uint8_t _pad0020[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CFollowPathInstanceData, m_xLastPredictedTransformsDeltas) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CFollowPathInstanceData, m_dampedTurnValue) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CFollowPathInstanceData, m_flTurnAmount) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::CFollowPathInstanceData, m_flPredictionScale) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CFollowPathInstanceData, m_flLastPathTime) == 0x1c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CFollowPathInstanceData) == 0x24);
    };
};
