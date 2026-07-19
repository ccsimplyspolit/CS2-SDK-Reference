#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelModelScenes_t.hpp"

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
        // Size: 0x28
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelModelSceneData_t
        {
        public:
            // m_scenes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlDict<source2sdk::client::CitadelModelScenes_t> m_scenes;
            char m_scenes[0x28]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelModelSceneData_t, m_scenes) == 0x0);
        
        static_assert(sizeof(source2sdk::client::CitadelModelSceneData_t) == 0x28);
    };
};
