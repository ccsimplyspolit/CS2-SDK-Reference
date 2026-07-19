#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/lerpdata_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x988
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerLerpObject : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iszLerpTarget; // 0x8e8            
            // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLerpTarget;
            char m_hLerpTarget[0x4]; // 0x8f0            
            uint8_t _pad08f4[0x4]; // 0x8f4
            CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8f8            
            source2sdk::modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x900            
            uint8_t _pad0901[0x3]; // 0x901
            float m_flLerpDuration; // 0x904            
            bool m_bAttachedEntityWasParented; // 0x908            
            bool m_bLerpRestoreMoveType; // 0x909            
            bool m_bSingleLerpObject; // 0x90a            
            uint8_t _pad090b[0x5]; // 0x90b
            // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::lerpdata_t> m_vecLerpingObjects;
            char m_vecLerpingObjects[0x18]; // 0x910            
            CUtlSymbolLarge m_iszLerpEffect; // 0x928            
            CUtlSymbolLarge m_iszLerpSound; // 0x930            
            bool m_bAttachTouchingObject; // 0x938            
            uint8_t _pad0939[0x3]; // 0x939
            // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityToWaitForDisconnect;
            char m_hEntityToWaitForDisconnect[0x4]; // 0x93c            
            source2sdk::entity2::CEntityIOOutput m_OnLerpStarted; // 0x940            
            source2sdk::entity2::CEntityIOOutput m_OnLerpFinished; // 0x958            
            source2sdk::entity2::CEntityIOOutput m_OnDetached; // 0x970            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLerpObject) == 0x988);
    };
};
